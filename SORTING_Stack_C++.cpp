// Stack Laprak
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> angka;

    // menambah isi stack
    angka.push(5);
    angka.push(10);
    angka.push(15);
    angka.push(20);
    cout << "Isi stack :\n";
	stack<int>tempStack = angka; 
    
while (!tempStack.empty()){
		cout << tempStack.top() << endl;
		tempStack.pop();
 	}
    cout << "Jumlah data pada stack: " << angka.size() << endl;
 	cout << endl;

   if(!angka.empty()){
 		cout << "data yang akan dihapus angka : " << angka.top() << endl;
	 }else {
	 	cout << "Stack sudah kosong" << endl;
	 	return 0;
	 }
    // Pop
    angka.pop();

    cout << "\nIsi stack setelah penghapusan:\n";
	 while (!angka.empty()){
	 	cout << angka.top()<<endl;
	 	angka.pop();
     }
 // Size

    return 0;
}

