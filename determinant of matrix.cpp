int leftD=0,rightD=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                rightD+=arr[i][j];
            }
            if(i+j==(n-1)){
                leftD+=arr[i][j];
            }
        }
    }
    return abs(leftD-rightD);
