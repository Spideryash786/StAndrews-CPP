// InputStrings
#include <iostream>
using namespace std;

void ReadString(char *ch,char delimiter){
	char c;
	c = cin.get();
	int i = 0;
	while(c!=delimiter){
		ch[i] = c;
		i++;
		c = cin.get();
	}
	ch[i] = '\0';	
}

int main(){
	char ch[100];

	// cin>>ch; // cin appends null at the end automatically 
	// cin>>a;
	// cout<<ch<<endl;
	// cout<<a;

	// ReadString(ch);
	// cin.getline(ch,100); // This will read a line till we don't get '\n', by default delimiter is '\n'
	cout<<ch;
	cout<<endl;
	return 0;
}