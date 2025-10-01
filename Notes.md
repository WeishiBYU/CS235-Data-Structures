Assignments to Remember
- Career exploration
- Free Code
- Service to others

Thing to remember:
- Call and Write Memory as little as possible


Lists and Iterators to use:
- Conversion
    - append = push_back
    - 
- List: Container
    - #include <vector>
    - Ordered/Index (Programer Controls)
    - Bad for searching
    - Features
        - size() give size of list (good)
        - get(i) get object at index i (best)
        - set(i, o) replace index i object with o (good)
        - append(o) add o to end (good)
        - insert (i,o) add o to index i and move everything back one (slow)
        - remove (i) remove object at index i and move everything forward one (slow)

- Linked List: Container
    - #include <list>
    - Ordered/Index (Programer Controls)
    - Features
        - size() (good)
        - get(i) (slow)
        - set(i, o) (slow)
        - append(o) (good)
        - insert(i, o) inserting at start is (good) everything else is (slow)
        - remove(i) (good) for start, (slower) for everything else

- Sets: Container
    - #include <set>
    - Ordered/Index (Programer Controls)
    - Features
        - size()
        - get(i)
        - set(i, o) 
        - append(o)
        - insert(i, o) 
        - remove(i)

- Maps: Container
    - #include <>
    - Ordered/Index (No Order)
    - No duplicates
    - Fast at finding
    - Features
        - size()
        - set(i, o)
        - find(o)
        - remove(o)

- Stacks: Container
    - #include <>
    - Ordered (Programer Controls)
    - Can only add or remove first item in container.
    - Good for reversing orders
    - Features
        - isEmpty() Bool for if it's empty
        - push(o) o to top of stack
        - top() pointer to stack begin
        - pop() remove top of stack
        - size()

- Queues: Container
    - #include <>
    - First in First Out
    - Good for queues
    - Ordered (Programer Controls)
    - Features
        - isEmpty() : returns true if there are no objects on the queue and false otherwise
        - push(o) : puts the object o into the back of the queue
        - front() : returns a pointer (or iterator) to the object that is at the front of the queue
        - pop() : removes the object that is at the front of the queue

- Priority Queues: Container
    - #include <>
    - Ordered (Programer Controls)
    - Like Queue but there is a comparator to order to priority
    - Features
        - isEmpty() : returns true if there are no objects on the priority queue and false otherwise
        - push(o) : puts the object o into the priority queue
        - front() : returns a pointer (or iterator) to the object that has the highest priority in the container
        - pop() : removes the object with the highest priority in the container