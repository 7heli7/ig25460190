int main()
{
    int i=5;
    int &ref_i=i;
    
    i++;
    cout << "i:" << i << endl;
    cout << "ref_i:" << ref_i << endl;
    
    ref_i++;
    cout << "i:" << i << endl;
    cout << "ref_i:" << ref_i << endl;
    
    system("pause");
    return 0;
}

