//below solution is done with a loop
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(!head)
    {
        head = newNode;
        return head;
    }
    Node* temp = head;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;    
    return head;
}

//below solution is done with recursion

Node* Insert(Node *head,int data)
{
  // Complete this method

    if(!head)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;
        return head;
    }    
    Insert(head->next,data);  
    return head;
}
