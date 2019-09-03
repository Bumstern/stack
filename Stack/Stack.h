#pragma once
const int N_SIZE = 100;

struct stack {
	int len;            // Количество элементов в стеке
	int* elem;		    // Массив для хранения элементов
	int real_len;	    // Настоящий размер массива

	stack() {			// Конструктор
		int* n = new int[N_SIZE];
		elem = n;
		len = 0;
		real_len = N_SIZE;
	}   

	~stack() {			   // Деструктор
		delete[] elem;
	}        

	void push(int k);      // Добавить в стек новый элемент

	int pop();             // Удалить из стека последний элемент
						   // и вернуть его значение

	int back();            // Вернуть значение последнего элемента

	int size();  		   // Вернуть количество элементов в стеке

	void clear();          // Очистить стек
};
