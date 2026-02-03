void findRowSum(const double *data,double *b,int M,int N){
	for(int i=0;i<N;i++){
		*(b+i) = 0;
		for(int j=0;j<M;j++){
			*(b+i) += *(data+(i*M)+j);
		}
	}
}