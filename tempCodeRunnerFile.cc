
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(myArray + i) << "  ";
    }