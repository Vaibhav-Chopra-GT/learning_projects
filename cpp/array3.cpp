
    int x, y, sum = 0;
    cout << "Enter number\n";
    cin >> x;
    for (int i = 1; i < x; i *= 10)
    {
        y = x / i % 10;
       
     
      sum ++;}
    int arr[sum]; int z = sum-1;
    
    for (int i = 1; i < x; i *= 10)
    {
        y = x / i % 10;
       
     
      
     arr[z] = y;
     z -= 1;
     
     
     }
    
    
        
    
    for(int i = 0; i < sum; i++)
cout<<arr[i];
    return 0;
}