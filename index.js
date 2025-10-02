var arry = [1, 2, 3, 4, 5];
console.log(arry);
let arry2 = arry.map(e => e * 2);
console.log(arry2);
let arry3 = arry.map((function fanc(e , index , array){
        return  array[index];
}));
console.log(arry3);
