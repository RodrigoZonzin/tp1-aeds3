function generateRandom(lim_inf, lim_sup){
    return Math.floor(Math.random() * (lim_sup - lim_inf) ) + lim_inf;
}


function generate_Xa_and_Xb(){
    var Xb = generateRandom(0, 10e2); 
    var Xa = generateRandom(0, Xb); 


    return [Xa, Xb]; 
}

function generate_N_points(N){
    xy = []; 

    for(var i =0; i<N; i++){
        xy[i] = [generateRandom(0, 10e2), generateRandom(0,10e2)]; 
    }
    return xy; 
}
var N = generateRandom(0, 100);
var Xa_Xb = generate_Xa_and_Xb();

console.log(N, Xa_Xb);
console.log(generate_N_points(N));
