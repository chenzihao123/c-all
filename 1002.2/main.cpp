#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	map<string,int> mp;
	map<string,int>::iterator mt;
	while (n-- >= 1)
	{
		cin >> s;
		int len = s.length();
		char pn[8];
		int loc = 0;
		for(int i = 0;i < len; i++)
		{
			if (s[i] == '-')
				continue;
			if (s[i]>= 48 && s[i] <= 57)
				pn[loc] = s[i];
			else if (s[i] <= 'P')
				pn[loc] = (s[i] - 'A')/3 + 2 + 48;
			else
			{
				pn[loc] = (s[i] - 'A')/3 + 1 + 48;
				if ((s[i] - 'A')%3)
					pn[loc]++;
			}
			if (loc == 2)
			{
				loc++;
				pn[loc]='-';
			}
			if(loc==7)
				break;
			loc++;
		}
		string str = pn;
		str = str.substr(0,8);
		mt = mp.find(str);
		if(mt != mp.end())
		{
			mt->second++;
		}
		else
		{
			mp.insert(map<string,int>::value_type(str,1));
		}
	}
	bool flag = false;
	for(mt = mp.begin();mt != mp.end(); mt++)
	{
		if(mt->second > 1)
		{
			cout<<mt->first<<' '<<mt->second<<endl;
			flag = true;
		}
	}
	if(!flag)
		cout<<"No duplicates.";
	return 0;
}
