/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var temp = init;
    return obj = {
        "increment" : ()=>{
            return ++temp;
        },
        "decrement" : ()=>{
            return --temp;
        },
        "reset" : ()=>{
            return temp = init;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */