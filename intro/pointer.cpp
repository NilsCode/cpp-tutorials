#include <iostream>

using namespace std;

int main(){
    int *scr_ptr = nullptr;
    int num = 10;
    scr_ptr = &num;
    cout << "Address " << scr_ptr << " Size of pointer :" << sizeof scr_ptr;
    cout << "Enter the new value of num : " << endl;
    cin >> *scr_ptr;
    cout << " The value of num is : " << num << endl;
    return 0;
}