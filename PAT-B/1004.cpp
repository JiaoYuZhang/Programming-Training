/*
ƴ��������ĳ��к͵�·�����˽ṹ�Ƚ��ر���һ����״�ṹ��
1. ÿ������������һ���ڵ㣻
2. ����֮��ĵ�·������һ���ߣ�
3. ���ĸ��ڵ����׶���
ƴ������������Ͼ�Ҫ���ˣ�����ƴ���������һ�������ӡ�Ϊ�˻�Ծ���գ��������ڵ�·�ϲ��û��ơ����ƿ��Ǻܹ�Ķ�����
���ܹ�����Ҫ�����е�·�϶����û��ƣ��������Ҫ��̫��Ǯ�Ļ����ǹ����˲�������һ�صġ�
����������ƻ����߲����󳼣�����������ֳ�����ôһ��������
1. һ����·Ҫô�����û��ƣ�Ҫô�������û��ƣ�����ѡ�����е�ĳһ�β��ã�
2. ����û�е�·ͨ���׶�����������Ϊһ��ͨ���׶��ĵ�·���û��ƣ�
3. ���в��û��Ƶĵ�·���ɵ���ͼ����ͨ�ģ��Ᵽ֤�������׶���������ͨ��ֻ�߲����˻��Ƶĵ�·�������еĻ��������ꣻ
4. ���ĳ�����У������׶����д��ڵ���2����·ͨ���ӳ��У�Ϊ�˷�ֹ�����˷ѣ����ֻ��ѡ�����е�����·���û��ƣ�
5. ���û��Ƶĵ�·���ܳ����趨һ�����ޡ�
�����������£�������Ҫʹ�ò��û��Ƶĵ�·����Խ��Խ�ã�����������취��

��������:
ÿ�������������1������������

����ĵ�һ����һ��������m��0<m<=9900����ʾ���û��Ƶĵ�·���ܳ��ȵ����ޡ�

����ĵڶ�����һ��������n��n<=100����ʾ���еĸ�����

��������n-1�����룬ÿ������������u��v��d����ʾ�±�Ϊu�ĳ�����һ������Ϊd�ĵ�·ͨ������һ���ӳ���v������0<=u<n��0<=v<n��0<d<=100��



�������:
���һ������������ʾ�ܲ��û��Ƶĵ�·���ȵ����ֵ

��������1:
5
5
0 1 1
0 2 2
0 3 3
0 4 4

�������1:
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
	//������
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