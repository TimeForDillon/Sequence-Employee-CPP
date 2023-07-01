// TYPEDEFS and MEMBER CONSTANTS for the sequence class:
//   typedef ____ value_type
//     sequence::value_type is the data type of the items in the sequence. It
//     may be any of the C++ built-in types (int, char, etc.), or a class with a
//     default constructor, an assignment operator, and a copy constructor.
//
//   typedef ____ size_type
//     sequence::size_type is the data type of any variable that keeps track of
//     how many items are in a sequence.
//
//   static const size_type CAPACITY = _____
//     sequence::CAPACITY is the maximum number of items that a sequence can hold.
//
// CONSTRUCTOR for the sequence class:
//   sequence( )
//     Postcondition: The sequence has been initialized as an empty sequence.
//
// MODIFICATION MEMBER FUNCTIONS for the sequence class:
//   void start( )
//     Postcondition: The first item on the sequence becomes the current item
//     (but if the sequence is empty, then there is no current item).
//
//   void advance( )
//     Precondition: is_item returns true.
//     Postcondition: If the current item was already the last item in the
//     sequence, then there is no longer any current item. Otherwise, the new
//     current item is the item immediately after the original current item.
//
//   void insert(const value_type& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence
//     before the current item. If there was no current item, then the new entry
//     has been inserted at the front of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.
//
//   void attach(const value_type& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence after
//     the current item. If there was no current item, then the new entry has
//     been attached to the end of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.
//
//   void remove_current( )
//     Precondition: is_item returns true.
//     Postcondition: The current item has been removed from the sequence, and the
//     item after this (if there is one) is now the new current item.
//
// CONSTANT MEMBER FUNCTIONS for the sequence class:
//   size_type size( ) const
//     Postcondition: The return value is the number of items in the sequence.
//
//   bool is_item( ) const
//     Postcondition: A true return value indicates that there is a valid
//     "current" item that may be retrieved by activating the current
//     member function (listed below). A false return value indicates that
//     there is no valid current item.
//
//   value_type current( ) const
//     Precondition: is_item( ) returns true.
//     Postcondition: The item returned is the current item in the sequence.
//
// VALUE SEMANTICS for the sequence class:
//    Assignments and the copy constructor may be used with sequence objects.

#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <cstdlib>  // Provides size_t

using namespace std;

class sequence
{
public:
    // TYPEDEFS and MEMBER CONSTANTS
    typedef double value_type;
    typedef size_t size_type;
    size_type CAPACITY;
    // CONSTRUCTOR
    sequence();
    // MODIFICATION MEMBER FUNCTIONS
    void insert(const value_type& entry);
    void insert_front(const value_type& entry);
    void insert_last(const value_type& entry);
    void attach(const value_type& entry);
    void start();
    void advance();
    void advance_last();
    void remove_current();
    void remove_front();
    void operator+=(sequence &rhs);
    // CONSTANT MEMBER FUNCTIONS
    size_type size() const;
    bool is_item() const;
    value_type current() const;

private:
    value_type *data;        // IN/OUT - the array that the sequence uses
    size_type used;          // IN/OUT - the array that the amount of slots used in the sequence
    size_type current_index; // IN/OUT - the current index of the sequence
};

#endif // SEQUENCE_H

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * sequence()
 *      This is the constructor for the sequence class
 ******************************************************************************/

/**************
 ** MUTATORS **
 **************/

/*******************************************************************************
 * insert(const value_type& entry)
 *      This method inserts a value into the sequence
 ******************************************************************************/

/*******************************************************************************
 * insert_front(const value_type& entry)
 *      This method inserts a value into the sequence at the front
 ******************************************************************************/

/*******************************************************************************
 * insert_last(const value_type& entry)
 *      This method inserts a value into the sequence at the end
 ******************************************************************************/

/*******************************************************************************
 * attach(const value_type& entry)
 *      This method attaches a value into the sequence at the end
 ******************************************************************************/

/*******************************************************************************
 * start()
 *      This method attaches sets the current index to the first value in the
 *      sequence
 ******************************************************************************/

/*******************************************************************************
 * advance()
 *      This method advance the current index by one
 ******************************************************************************/

/*******************************************************************************
 * advance_last()
 *      This method reverses the current index by one
 ******************************************************************************/

/*******************************************************************************
 * remove_current()
 *      This method removes the current index
 ******************************************************************************/

/*******************************************************************************
 * remove_current()
 *      This method removes the index at the front of the sequence
 ******************************************************************************/

/*******************************************************************************
 * operator+=(sequence &rhs)
 *      This method overrides the += operator for the sequence class
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * size() const
 *      This method returns the number of elements in the sequence
 ******************************************************************************/

/*******************************************************************************
 * is_item() const
 *      This method returns true if there is an element in the sequence
 ******************************************************************************/

/*******************************************************************************
 * current() const
 *      This method returns the current index
 ******************************************************************************/
