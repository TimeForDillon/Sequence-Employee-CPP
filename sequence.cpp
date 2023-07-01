/*******************************************************************************
* AUTHOR        : Dillon Welsh
* ASSIGNMENT1   : Sequence Class
* CLASS         : CS8
* SECTION       : 33776
* DUE DATE      : 02/28/2021
*******************************************************************************/

#include "sequence.h"

#include <iostream>

/*******************************************************************************
 * sequence()
 *      This is the constructor for the sequence class
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

sequence::sequence()
{
    this->used = 0;
    this->current_index = 0;
    this->CAPACITY = 30;
    this->data = new value_type[this->CAPACITY];
}

/*******************************************************************************
 * insert(const value_type& entry)
 *      This method inserts a value into the sequence
 * _____________________________________________________________________________
 * INPUT:
 *      const value_type& entry
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::insert(const value_type& entry)
{
    if(this->size() < this->CAPACITY)
    {
        if(!this->is_item()) this->start();

        for(size_t i = this->used; i > this->current_index; i--)
        {
            this->data[i] = this->data[i - 1];
        }
        this->data[this->current_index] = entry;
        this->used++;
    }
    else cout << "Capacity reached! Entry not inserted!" << endl;
}

/*******************************************************************************
 * insert_front(const value_type& entry)
 *      This method inserts a value into the sequence at the front
 * _____________________________________________________________________________
 * INPUT:
 *      const value_type& entry
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::insert_front(const value_type& entry)
{
    if(this->used < this->CAPACITY)
    {
        if(this->is_item())
        {
            for(size_t i = this->used; i > 0; i--)
            {
                this->data[i] = this->data[i - 1];
            }
            this->used++;
            this->data[0] = entry;
            this->current_index = 0;
        }
        else
        {
            this->current_index = this->used;
            this->data[0] = entry;
            this->used++;
        }
    }
    else cout << "Capacity reached! Entry not inserted!" << endl;
}

/*******************************************************************************
 * insert_last(const value_type& entry)
 *      This method inserts a value into the sequence at the end
 * _____________________________________________________________________________
 * INPUT:
 *      const value_type& entry
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::insert_last(const value_type& entry)
{
    if(this->used < this->CAPACITY)
    {
       this->data[this->used] = entry;
       this->used++;
    }
    else cout << "Capacity reached! Entry not inserted!" << endl;
}

/*******************************************************************************
 * attach(const value_type& entry)
 *      This method attaches a value into the sequence at the end
 * _____________________________________________________________________________
 * INPUT:
 *      const value_type& entry
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::attach(const value_type& entry)
{
    if(this->used < this->CAPACITY)
    {
        if(this->is_item())
        {
            for(size_t i = this->used; i > this->current_index + 1; i--)
            {
                this->data[i] = this->data[i - 1];
            }
            this->data[this->current_index + 1] = entry;
            this->current_index++;
            this->used++;
        }
        else
        {
            this->data[this->used] = entry;
            this->current_index = this->used;
            this->used++;
        }
    }
    else cout << "Capacity reached! Entry not attached!" << endl;
}

/*******************************************************************************
 * start()
 *      This method attaches sets the current index to the first value in the
 *      sequence
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::start()
{
    if(this->used > 0) this->current_index = 0;
    else this->current_index = this->used;

}

/*******************************************************************************
 * advance()
 *      This method advance the current index by one
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::advance()
{
    if(this->is_item()) this->current_index++;
    else cout << "You have reached the end." << endl;
}

/*******************************************************************************
 * advance_last()
 *      This method reverses the current index by one
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::advance_last()
{
    this->current_index = this->used - 1;
}

/*******************************************************************************
 * remove_current()
 *      This method removes the current index
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::remove_current()
{
    for(size_t i = this->current_index; i < this->used; i++)
        this->data[i] = this->data[i +1];
    this->used--;
}

/*******************************************************************************
 * remove_current()
 *      This method removes the index at the front of the sequence
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::remove_front()
{
    for(size_t index = 0; index < this->used; index++)
    {
        this->data[index] = this->data[index + 1];
    }
    this->used--;
}

/*******************************************************************************
 * operator+=(sequence &rhs)
 *      This method overrides the += operator for the sequence class
 * _____________________________________________________________________________
 * INPUT:
 *      sequence &rhs
 * OUTPUT:
 *      none
 ******************************************************************************/

void sequence::operator+=(sequence &rhs)
{
   rhs.start();

   for(size_t i = 0; i < rhs.size(); i++)
   {
       this->insert_last(rhs.current());
       rhs.advance();
   }
}

/*******************************************************************************
 * size() const
 *      This method returns the number of elements in the sequence
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      size_type
 ******************************************************************************/

sequence::size_type sequence::size() const
{
    return this->used;
}

/*******************************************************************************
 * is_item() const
 *      This method returns true if there is an element in the sequence
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      bool
 ******************************************************************************/

bool sequence::is_item() const
{
    return((this->used != 0) && (this->current_index < this->used));
}

/*******************************************************************************
 * current() const
 *      This method returns the current index
 * _____________________________________________________________________________
 * INPUT:
 *      none
 * OUTPUT:
 *      value_type
 ******************************************************************************/

sequence::value_type sequence::current() const
{
    return this->data[this->current_index];
}
