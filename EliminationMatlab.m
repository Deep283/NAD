tic
n = 3;
a = [1 1 1 6 ; 3 4 5 26 ; 1 2 1 8];
parfor i = 1 : n
    parfor j = i+1 : n
 	    k = a(j,i)/a(i,i);
	    parfor z = i : n+1
	 	    a(j,z) = a(j,z) - ( k * a(i,z) );
	    end
    end
end
x = [ 0 0 0 ];
x(n) = a(n,n+1)/a(n,n);
parfor i = n-1 : -1 : 1
    sum = 0;
    parfor j = i+1 : n
       sum = sum + a(i,j) * x(j);
    end
    x(i) = (a(i,n+1) - sum ) / a(i,i);
end
disp(a)
disp(x)
time = toc
