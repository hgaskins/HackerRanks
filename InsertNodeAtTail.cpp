/*
    Insert Node at the tail of a linear linked list
    head pointer input could be NULL as well for empty list
    Node is defined as
    struct Node
    {
        int data;
        struct Node * next;
    }
*/
 Node * Insert(Node * head, int data)
{
    // create new node
    Node * node_to_insert = new Node;
    // put data into new node
    node_to_insert->data = data;
    // set head to current for traversal
    Node * current = head;

    // if no head insert newly created node
    if (!head)
        return node_to_insert;
    
    // while the current node we are on is not empty traverse through the list
    while(current->next != NULL)
    {
        current = current->next;
    }

    // once the node hits NULL set the next place to where we are in the list to the newly created node
    current->next = node_to_insert;

    // and then return the head bc the challange wanted that for some reason ¯\_(ツ)_/¯
}
