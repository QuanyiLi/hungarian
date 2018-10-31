#include<iostream>
#include<vector>
#include"Hungarian.h"

using namespace std;

int main() {
	std::cout <<"���۾���"<< std::endl;
	float cost[4][4]= {
		90,75, 75, 80,
		35,85, 55, 65,
		125, 95, 90, 105,
		45, 110, 95, 115
	};
	vector<vector<double>> M;
	for (int i = 0;i < 4;++i) {
		vector<double> tmp;
		for (int j = 0;j < 4;++j) {
			 tmp.push_back(cost[i][j]);
		}
		M.push_back(tmp);
		}
	vector<int> assignment;
	Hungarian APS;
	APS.Solve(M, assignment);
 
	std::cout << "�ɹ�ƥ�����Ŀ�� " << assignment.size() << std::endl;

	for (int i = 0;i < assignment.size();++i) {
		std::cout << assignment[i]+1 << std::endl;
	}

	system("pause");
	return 0;
}
