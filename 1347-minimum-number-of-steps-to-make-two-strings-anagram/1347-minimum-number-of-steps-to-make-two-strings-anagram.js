/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var minSteps = function(s, t) {
    let sMap = new Map()
    let tMap = new Map();

    for(let i = 0 ; i<s.length ; i++){
        if(sMap.has(s[i])){
            sMap.set(s[i],(sMap.get(s[i]))+1);
        }
        else{
            sMap.set(s[i],1);
        }



        if(tMap.has(t[i])){
            tMap.set(t[i],(tMap.get(t[i]))+1);
        }
        else{
            tMap.set(t[i],1);
        }
    }



    let count = 0;

        
    for (let [char, countT] of tMap) {
        let countS = sMap.get(char) || 0;
        if (countT > countS) {
            count += countT - countS;
        }
    }

    return count;
};