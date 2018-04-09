/ *
Detect a cycle in a linked list. Not that the head pointer may be 'NULL' if the list is empty. 

A Node is defined as: 
    struct Node 
    {
        int data;
        struct Node * next;
    };

*/

bool has_cycle(Node * head) 
{
    //if list is empty return false
    // have a fast traversing pointer to traverse 2 items at a time
    // have a slow traversing pointer to traverse 1 item at a time
    // if slow == fast return true
    // if fast is null || fast->next is null return false

    if(!head)
        return false;
    
    Node * slow = head;
    Node * fast = head->next;
    
    while(fast && fast->next) // loop while there is a fast and a fast->next
    {
        fast = fast->next->next; // is this safe? Yes. Traverse by two
        slow = slow->next;
        if(fast == slow)
            return true;
    }
    
    return false;
}
