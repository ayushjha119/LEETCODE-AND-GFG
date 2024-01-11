//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head1) {
        // your code here
         vector<int>vec;
        Node* curr=head1;
        while(curr!=NULL){
            vec.push_back(curr->data);
            curr=curr->next;
        }
        sort(vec.begin(),vec.end());
        // Node *head1=new Node(arr[0]);
        // curr=head1->next;;
        Node* head = NULL; 
        for (int i = 0; i < vec.size(); ++i) {
        Node* newNode = new Node(vec[i]);  // Create a new node for the current element

        // If the list is empty, set the new node as the head
        if (head == NULL) {
            head = newNode;
        } else {
            // Otherwise, add the new node to the end of the list
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        }
        return head; 
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends