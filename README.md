# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Effect of the P, I, D components on the performance

### The Proportional Component

The proportional part of the controller will steer the car in proportion to the CTE, which is the distance between the y-position of the car and the middle line of the road. But if we only use a p-controller, the car will overshoot and get off track quickly. A high gain of this component will also cause high oscillation. 

### Integral Component
The integral term will not only consider the current error but also the sum of all previous offset. The I-controller can be used to eliminate bias.

### Derivative Component

The d-controller considers the rate of change of the error, and will try to bring this rate to 0. 
So if the car is deviating from the middle of the lane, the steering angle will correct itself faster, and if the car is moving toward the center, the steering angle will be more smooth. If the gain of the D-Component is high, the steering angle of the car will stay nearly constant. A low gain will lead to a high oscillations and result in overshooting.
 
 
## How I chose the parameters
To begin with, I set the K_p and K_d to 1, and K_i to 0.05. The car was oscillating and immediately went of track. To reduce the oscillation, I increased K_d and reduced K_p, and the performance was slightly better but the car still went off track soon. I reduced the gain of the I-component, and found out that setting this gain to 0 leads to a pretty good result, as there is no bias in our system.