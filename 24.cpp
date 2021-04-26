
#include <iostream>
#include <set>
#include<string>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int mad = 0,cad=0;
	string ss;
	ifstream in("24.txt");
	while (in >> ss) {
		int na = 0;
		vector<vector<int>> pl(0);
		for (int i = 0; i < 26; i++) {
			pl.push_back(vector<int>(0));
		}

		for (int j = 0; j < ss.size(); j++) {
			if (ss[j] == 'A') {
				na++;
			}
			pl[(int)ss[j]-65].push_back(j);
		}
		if (na < 25) {
			int cm = 0;
			for (int i = 0; i < 26; i++) {
				if (pl[i].size() > 1) {
					cm = max(cm, pl[i][pl[i].size() - 1] - pl[i][0]);
				}
			}
			mad = max(mad, cm);
		}
	}
	cout << mad;
}
