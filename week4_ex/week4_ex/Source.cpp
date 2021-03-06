﻿#include<iostream>
using namespace std;

struct Node {
	int num;
	Node *ahead;
	Node *next;
};

Node *Create(int N);
Node *Search(Node *head, int P);
Node *Release(Node *head, int M);

int main() {
	/*
	N:起始节点数， P：开始节点
	每次释放第M个节点
	创建N个节点的环
	找到第P个节点
	不断释放第M个元素
	直到只剩一个元素
	释放第M个节点
	*/
	int N, P, M = 0;
	cin >> N >> P >> M;
	Node *head = Create(N);
	head = Search(head, P);
	while (head->next!=head)
	{
		head = Release(head,M);
	}
	cout << head->num;
	return 0;
}

Node *Create(int N) {
	int n = 1;
	Node *node = new Node;
	node->num = n;
	Node *head = node;
	Node *tail = head;
	while (n++ < N) {
		node = new Node;
		node->num = n;
		tail->next = node;
		node->ahead = tail;
		tail = tail->next;
	}
	tail->next = head;
	head->ahead = tail;
	return head;
}
Node *Search(Node *head, int P) {
	while (head->num != P) {
		head = head->next;
	}
	return head;
}
Node *Release(Node *head, int M) {
	int count = 1;
	Node *temp = head;
	while (count < M) {
		temp = temp->next;
		count++;
	}
	temp->ahead->next = temp->next;
	temp->next->ahead = temp->ahead;
	cout << temp->num << ",";
	head = temp->next;
	delete temp;
	return head;
}