#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<string> str;
	string x;
	while ((getline(cin, x)) != EOF)
		str.push_back(x);
	for (int i = 0; i < str.size(); i++){
		for (int j = 0; j < str[i].length(); j++){
			str[i][j] = tolower(str[i][j]);
			if (str[i][j] == '.' || str[i][j] == '?' || str[i][j] == '!')
				str[i][j] = '\n';
		}
	}
	for (int i = 0; i < a; i++) 
		for (int j = 0; j < str[i].length(); j++) 
			if (i == 0 || str[i - 1][str[i - 1].length() - 1] == '\n')
				str[i][0] = toupper(str[i][0]);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < str[i].length(); j++) 
			cout << str[i][j];
		if(str[i + 1][0] < 'A' || str[i+1][0] > 'Z')
			cout << " ";
	}
	return 0;
}

