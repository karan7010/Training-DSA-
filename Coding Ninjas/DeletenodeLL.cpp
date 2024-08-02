/* Delete a Node from Linked List
Problem statement
You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.

Note :
Assume that the Indexing for the linked list always starts from 0.

If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.
Illustration :
The following images depict how the deletion has been performed.*/

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

//-------------------------------//

Node* deleteNode(Node* head, int pos) {
    // If the linked list is empty or the position is negative, return the original head
    if (head == nullptr || pos < 0) {
        return head;
    }

    // If the node to be deleted is the head node
    if (pos == 0) {
        Node* temp = head;
        head = head->next; 
        delete temp; 
        return head;
    }

    Node* current = head;
    int index = 0;
    
    // Traverse the list until the node before the one to be deleted
    while (current != nullptr && index < pos - 1) {
        current = current->next;
        index++;
    }

    // If the current node is null or the next node is null, the position is out of bounds
    if (current == nullptr || current->next == nullptr) {
        return head;
    }

    // Delete the node at the given position
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;

    return head;
}
