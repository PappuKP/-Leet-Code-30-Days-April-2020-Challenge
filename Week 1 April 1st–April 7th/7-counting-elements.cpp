int countElements(vector<int>& a) {
    int b[1001]={0};
    int counting_elements=0;
    for(int i=0;i<a.size();++i)++b[a[i]];
    for(int i=1;i<=1000;++i)
        if(b[i-1]>0 && b[i]>0)
            counting_elements+=b[i-1];
    return count;
}