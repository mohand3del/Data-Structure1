#include <iostream>
#define ll long long
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

class Node {
public:
    Node* next;
    int data;
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }


    bool isEmpty() {
        return  (head == NULL);
    }


    void insertFirstNode(int newItem) {
        Node* newnode;
        newnode->data = newItem;
        if (isEmpty()) {
            newnode->next = NULL;
            head = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;


        }

    }
    int count(){
    	int counter;
    	Node* temp = head;
    	while(temp!=NULL){
    		counter++;
    		temp = temp->next;
		}
		return counter;
	}

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " "<<endl;
            temp=temp->next;

        }
       
 
    }

    bool isFound(int item) {
        bool found = false;
        Node* temp = head;
        while (temp != NULL)
        {
            if (temp->data == item)
                found = true;
        }
        return found;

    }

};

using namespace std;
int main() {
    ios
        LinkedList list;


    for (int i = 1; i < 5; i++) {
    	
    if (list.isEmpty()) {
        cout << "List empty"<<endl;
    }
    else {
    	cout << "item" << list.count();
    }
            
        int item;
        cout << "Enter item" << endl;
        cin >> item;
        list.insertFirstNode(item);
        list.display();
   }


}

