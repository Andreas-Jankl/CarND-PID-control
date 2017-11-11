# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

Implement a PID in C++ that can navigate a car safely around the track of the simulator given.

---

## Review

* Describe the effect each of the P, I, D components had in your implementation.
  * A high P component leads to very big steering angle values which as a consequences leads to high overshooting and big oscillations that can lead to the vehicle falling of the track. A low P component however will lead to the vehicle not making the curve. So I found I need.d a sufficient P component which does cause oscilliations but at least the vehicle makes the curve,
  * A high D component does have an effect on the speed of corrections. A high D component does can lead to very fast oscillations. I found that I needed a sufficient D component so that the D component compensates for the oscilliations caused by the P component since it does correct the oscilliations fast.
  * I did not find the I component to be particularily important since it only compensates for biases and there really is not much bias found in the simulation so I set it to be low.


* Describe how the final hyperparameters were chosen.

  * I tuned them manually. 
  * Basically I set the parameters to very large and very small values so that I could see the effect of the parameters. Eventually I settled for values in the middle.

