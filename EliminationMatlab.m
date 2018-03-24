n = 3
a = [1 1 1 6 ; 3 4 5 26 ; 1 2 1 8]
for i = 1 : n
    for j = i+1 : n
 	    k = a(j,i)/a(i,i);
	    for z = i : n+1
	 	    a(j,z) = a(j,z) - ( k * a(i,z) );
	    end
    end
end
x = [ 0 0 0 ];
x(n) = a(n,n+1)/a(n,n);
for i = n-1 : -1 : 1
    sum = 0;
    for j = i+1 : n
       sum = sum + a(i,j) * x(j);
    end
    x(i) = (a(i,n) - sum ) / a(i,i);
end
disp(a)
disp(x)
	
    
