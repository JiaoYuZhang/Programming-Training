/*
拼多多王国的城市和道路的拓扑结构比较特别，是一个树状结构：
1. 每个城市是树的一个节点；
2. 城市之间的道路是树的一条边；
3. 树的根节点是首都。
拼多多周年庆马上就要到了，这是拼多多王国的一个大日子。为了活跃气氛，国王想在道路上布置花灯。花灯可是很贵的东西，
尽管国王想要在所有道路上都布置花灯，但是如果要花太多钱的话，是过不了财政大臣那一关的。
国王把这个计划告诉财政大臣，最后他们商讨出来这么一个方案：
1. 一条道路要么不布置花灯，要么整条布置花灯，不能选择其中的某一段布置；
2. 除非没有道路通向首都，否则至少为一条通向首都的道路布置花灯；
3. 所有布置花灯的道路构成的子图是连通的，这保证国王从首都出发，能通过只走布置了花灯的道路，把所有的花灯游览完；
4. 如果某个城市（包括首都）有大于等于2条道路通向子城市，为了防止铺张浪费，最多只能选择其中的两条路布置花灯；
5. 布置花灯的道路的总长度设定一个上限。
在上述方案下，国王想要使得布置花灯的道路长度越长越好，你帮国王想想办法。

输入描述:
每个测试输入包含1个测试用例。

输入的第一行是一个正整数m，0<m<=9900，表示布置花灯的道路的总长度的上限。

输入的第二行是一个正整数n，n<=100，表示城市的个数。

紧接着是n-1行输入，每行三个正整数u、v、d，表示下标为u的城市有一条长度为d的道路通向它的一个子城市v，其中0<=u<n，0<=v<n，0<d<=100。



输出描述:
输出一个正整数，表示能布置花灯的道路长度的最大值

输入例子1:
5
5
0 1 1
0 2 2
0 3 3
0 4 4

输出例子1:
5
*/

#include <iostream>
#include<vector>

using namespace std;

class Node {
public:
	int parent;
	vector<int> childs;
};

/*
void createNode(int u,int v,int d)
{
	Node root;
	root.parent = u;
	root.childs.push_back(v);
	nodes.push_back(root);
	egdes[u][v] = d;
}
*/


int main()
{
	int m, n;
	cin >> m >> n;
	//创建树
	vector<Node> nodes;
	int egdes[101][101];
	for (int i = 0; i < n-1; i++)
	{
		int u, v, d;
		cin >> u >> v >> d;
		egdes[u][v] = d;

		if (u == 0 && nodes.size() == 0)
		{
			//createNode(u, v, d);
			Node root;
			root.parent = u;
			root.childs.push_back(v);
			nodes.push_back(root);	
		}
		else {
			bool flag = false;
			for (int j = 0; j < nodes.size(); j++)
			{
				if (u == nodes[j].parent)
				{
					nodes[j].childs.push_back(v);
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				Node root;
				root.parent = u;
				root.childs.push_back(v);
				nodes.push_back(root);
			}
		}
	}
	cout << nodes.size();

	
	getchar();
	getchar();
	return 0;
}