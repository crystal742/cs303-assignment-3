#include <iostream>
#include <sstream>
#include <stack>
using namespace std; 

void reverse_word() {
stack<string> string_list;
string str;
cout << "Enter a string :";
getline(cin, str);
string local;
stringstream ss(str);
while (ss >> local) {
	string_list.push(local);
}

while (!string_list.empty())
{
	cout << string_list.top() << " ";
	string_list.pop();
}
cout << endl;
}


int main() {
	reverse_word();
	return 0;
} 