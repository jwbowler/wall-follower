void calculateMovement(const float distance[], float& speed, float& rotation)
{
    /***********************************
     * WRITE YOUR CODE BELOW THIS LINE *
     ***********************************
     * The following variables will give you the distances, in meters,
     * that each ultrasonic sensor is detecting:
     *
     * distance[0]
     * distance[1]
     * distance[2]
     * distance[3]
     *
     * After you've done your calculations, use the "speed" and
     * "rotation" variables to command your robot, like this:
     *
     * speed = blahblahblah;
     * rotation = blahblahblah;
     *
     * "speed" can be a number from -1.0 to 1.0, where 1.0 means full speed
     * forward, -1.0 means full speed reverse, and 0.0 means staying in place.
     *
     * "rotation" can be a number from -1.0 to 1.0, where 1.0 means turning hard
     * right, -1.0 means turning hard left, and 0.0 means going straight.
     *
     * Here's an example for you to start with.
     */



    if (distance[0] > 0.3) // If Ultrasonic Sensor #0 senses that it is more than 30cm away from the wall...
    {
        rotation = 0.2;    // ...turn right, towards the wall.
    }
    else                   // Otherwise...
    {
        rotation = -0.2;   // ...turn left, away from the wall.
    }

    speed = 0.5;           // Keep the same speed, regardless.



    /***********************************
     * WRITE YOUR CODE ABOVE THIS LINE *
     ***********************************/
}
