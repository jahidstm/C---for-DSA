#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to create a new node
Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(Node **head, int value)
{
    Node *newNode = createNode(value);
    if (*head == nullptr)
    {
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int findDifference(Node *head)
{
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    Node *temp = head;
    while (temp != nullptr)
    {
        minVal = std::min(minVal, temp->data);
        maxVal = std::max(maxVal, temp->data);
        temp = temp->next;
    }
    return maxVal - minVal;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;
    int value;
    while (std::cin >> value && value != -1)
    {
        insertAtEnd(&head, value);
    }
    int difference = findDifference(head);
    std::cout << difference << std::endl;
    return 0;
}
