#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node *link;
}Node;

int main(){

Node *sample = new Node;
sample->songName = "Heaven Knows by Orange and Lemon";

cout << sample->songName << endl;

        return 0;
}

Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;

    return newNode;

}

int main(){
    Node *head = createNode("Sanctuary by Joji");

    return 0;
}

void traverse(Node *head){
    Node *temp = new Node;
    temp = head;

    cout << "My Playlist" << endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if (temp->link == NULL){
            cout << "NULL"<<endl;
        }
        
        temp = temp->link;

     }
        
}

Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
}
Node *temp = new Node 

int main(){
    Node *head = createNote("sanctuary by Joji");

    head = insertAtEnd ("sunday morning by Maroon 5", head);
    taverse(head);

    return 0;
}