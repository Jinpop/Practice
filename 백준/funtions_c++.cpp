void Eratos(int n)
{
  if (n <= 1) return;
	bool* table = new bool[n + 1];
	
	for (int i = 2; i <= n; i++){
	  table[i] = true;
  }

	for (int i = 2; i * i <= n; i++)
	{
		if (table[i]) {
			for (int j = i * i; j <= n; j += i){
			    PrimeArray[j] = false;
      }
    }
	}
}

class deque{
private:
  int size;
  int rear;
  int front;
  T *arr;

public:
  deque(int n)
  {
    arr = new T[n * 2 + 2];
    front = (n * 2 + 2) / 2;
    rear = front - 1;
    size = 0;
  }
  void push_front(T temp)
  {
    arr[--front] = temp;
    size++;
  }
  void push_rear(T temp)
  {
    arr[++rear] = temp;
    size++;
  }
  void pop_front()
  {
    if (size > 0)
    {
      cout << arr[front++] << "\n";
      size--;
    }
    else
    {
      cout << -1 << "\n";
    }
  }
  void pop_rear()
  {
    if (size > 0)
    {
      cout << arr[rear--] << "\n";
      size--;
    }
    else
    {
      cout << -1 << "\n";
    }
  }
  void show_size()
  {
    cout << size << "\n";
  }
  void empty()
  {
    if (size > 0)
    {
      cout << 0 << "\n";
    }
    else
    {
      cout << 1 << "\n";
    }
  }
  void show_front()
  {
    if (size > 0)
    {
      cout << arr[front] << "\n";
    }
    else
    {
      cout << -1 << "\n";
    }
  }
  void show_rear()
  {
    if (size > 0)
    {
      cout << arr[rear] << "\n";
    }
    else
    {
      cout << -1 << "\n";
    }
  }
  void show()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[front + i] << " ";
    }
    cout << "\n";
  }
  ~deque()
  {
    delete[] arr;
  }
};