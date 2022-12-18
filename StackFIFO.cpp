#include<iostream>
#include <queue>

using std::queue;

int main(){
	queue<int> q;
	for(int i = 1; i <= 10; i++){
		q.push(i);
	}
	
	while(!q.empty()){
		std::cout << q.front() << std::endl;
		q.pop();
	}
	std::cin.get();
}