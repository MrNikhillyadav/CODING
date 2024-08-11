

function textAnimation1(){
// to add intro and outro on text use timeline()
        var tl = gsap.timeline();
        //INTRO
        tl.from('#page1 h1', {
            x : 50,
            opacity: 0,
            stagger : 0.1,
            duration: 1,
        })
        //OUTRO
        // tl.to('#page1 h1', {
        //     x : -50,
        //     opacity: 0,
        //     stagger : 0.1,
        //     duration: 1,
        //     delay: 1.5
        // })
}
textAnimation1()


// for reference from Rejouice website 
// gsap.from("#small-heading  h2 ",{
//     y:210,
//     stagger:0.2,
//     duration : .5,
//     scrollTrigger:{
//         trigger : "#page2",
//         scroller: "#main",
//         start : "top 70%",
//         end : "top 71%",
//         // markers: true,
//         scrub : 2
//     }
    
// })