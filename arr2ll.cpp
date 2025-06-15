#include<bits/stdc++.h>
using namespace std;


class Node{

	public:
		int data;
		Node* next;

		Node(int data1, Node* nextptr){
		
			data = data1;
			next = nextptr;
		
		}

		Node(int data1){
		
			data = data1;
			next = nullptr;
		
		}

};

/// Take input N and an array of size N.
/// Store it in a LL
/// Print the LL



int main(){

	int N; cin>>N;
	vector<int> arr = {};

	for (int i=0; i<N; i++){
	
		int x; cin>>x;
		arr.push_back(x);
	
	
	}



	Node* head = new Node(arr[0]);

	Node* prev = head;

	for (int i=1; i<N; i++){
	
		Node* y = new Node(arr[i]);
		prev->next = y;
		prev = y;
	
	
	}

	Node* z = head;
	while(z!=nullptr){
	
		cout<<z->data<<endl;
		z = z->next;
	
	
	}





}

