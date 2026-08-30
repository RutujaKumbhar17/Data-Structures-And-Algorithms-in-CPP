#include<iostream>
using namespace std;


class Node{
    public:

    // this acts like object, one data = one node. Like train dabbas.
        int data;
        Node* next;

        //Constructor-Parameterized
        Node(int val){
            data = val;
            next = NULL;
            
        }

};

class List{
    //Here those dabbas will be connected and manipulated.

    //These are the pointers.
    Node* head;
    Node* tail;
    public:

        //Non-Parameterized constructor
        List(){
            head = tail = NULL;
        }

        //LL FUNCTIONS:
        
        // 1] PUSH FRONT -- TC-> O(1)

        void push_front(int val){
            Node* newNode = new Node(val); // Dynamic

            //Node newNode(val);-->static-->deletes the object when the control comes out of push_front ans as we will perform actions on LL in int main so this is not the obv choice.

            // a) NULL
            if(head == NULL){
                head = tail = newNode;
                return;
            }

            // b) Not NULL
            else{
                newNode->next = head;
                head = newNode;
            }

        }


        // 2] PUSH BACK -- O(1)

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail =newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }


        // 3] POP FRONT -- O(1)

        void pop_front(){
            if(head == NULL){
                return;
            }

            Node* temp = head;
            head = head->next;
            temp->next =NULL;
            delete temp;
        }


        // 4] POP BACK -- O(n)

        void pop_back(){
            if(head == NULL){
                cout<<"ll IS EMPTY\n";
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }

            temp->next =NULL;
            delete tail; //tail ka data delete horha hai
            tail = temp; 
        }


        // 5] INSERT AT A SPECIFIC POSITION -- O(n)

        void insert(int val,int pos){
            if(pos<0){
                cout<<"Invalid position\n";
                return;
            }
             
            if( pos == 0){
                push_front(val);
                return;
            }

            Node* temp =head;
            for (int i = 0; i<pos-1; i++){
                if(temp==NULL){
                    cout<<"Invalid pos\n";
                    return;
                }
                temp= temp->next;
            }

            Node* newNode =new Node(val);
            newNode->next =temp->next;
            temp->next =newNode;


        }


        // 6] SEARCH -- O(n)

        int search(int key){
            Node* temp =head;
            int idx =0;

            while(temp!= NULL){
                if(temp->data ==key){
                    return idx;
                }

                temp= temp->next;
                idx++;

            }
            return -1;
        }

        // 7] PRINT THE LL -- O(n)

        void printll(){
            Node* temp =head;

            while(temp!=NULL){
                cout<<temp->data <<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }


};
int main(){
    List ll; //Linked l ist created.
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();

    ll.insert(4,2);

    cout<<ll.search(4)<<endl;

    ll.printll();

    return 0;
}
