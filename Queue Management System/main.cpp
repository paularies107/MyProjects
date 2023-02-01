#include <iostream>
using namespace std;

//Queue Management System
template <typename T>
class Queue {
    public:
	int size=0;
	T* queue;

	public:
	Queue() {
		size;
		queue = new T[100];
	}
	void add(T data) {
		queue[size] = data;
		size++;
	}
	void remove() {
		if (size == 0) {
			cout << "Queue is empty" << endl;
			return;
		}
		else {
			for (int i = 0; i < size - 1; i++) {
				queue[i] = queue[i + 1];
			}
			size--;
		}
	}
	void print() {
		if (size == 0) {
			cout << "Queue is empty"  << endl;
			return;
		}
		for (int i = 0; i < size; i++) {
            if (i == 0) {
                cout << "\nProceed to Counter: "<< queue[i]<< endl
                     << "Waiting list: " << endl;
                     }
            else {
			cout << queue[i] << " <- " << endl;
            }
		}
		cout << endl;
	}
};

int main() {
    //Declare Variables
    int x, n_added = 0, repeat = 0;
    string queue_n;
    Queue <string>q1;
    //Choose whether to add or remove a Queue number
    while(repeat !=1) {
        cout << "Type 1 to add Queue number" << endl
             << "Type 2 to remove Queue number" << endl;
        cin >> x;
        if(x<1||x>2){
            cout << "Error: Number not specified" << endl;
            return 1;
        }
        if(x==1) {
            //Choose how many numbers to add to the list
            cout << "How many Queue Numbers will be added to the Waiting list? ";
            cin >> n_added;
            if (n_added/1 != n_added ){
                cout << "Error: wrong input" << endl;
                return 1;
            }
            int count = 0;
            while (count < n_added) {
                //Type Queue numbers
                cout << "Type Queue Numbers to add to Waiting list: ";
                cin >> queue_n;
                q1.add(queue_n);
                count++;
            }
            if (count >= n_added)
            q1.print();
            else
            return 1;
        }
        else if (x==2){
        //Choose to remove a number from the list
            if(n_added!=0) {
                q1.remove();
                q1.print();
            }
            else
                cout << "Error: Empty List" << endl;
        }
    }
    return 0;
}
