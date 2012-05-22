# Ships

Ships is an exercise in graphics and physics programming.

Essentially, the game revolves around the player owning and operating an
old-fashioned sailing vessel.  Eventually, multi-player "crews" will be able to
sail much larger vessels, but for the time being single-player dinghies are all
I'm looking to implement.

## NPC roles

Some responsibilities on a sailing vessel are boring enough not to want to
trouble a player with.  Deck-hands will be provided by the computer to assist
the player, but they are entirely controlled by the player issuing orders. 
These orders may include things like "bear 10° right" or "raise the mainsail". 
On crew-controlled vessels, the "captain" can issue broad orders to his
subordinates who will then issue clearer orders to the deckhands.  For example,
a captain might say to his First, "lay in a course for the island of tortuga",
to which the First would calculate the necessary heading from their current
position and heading then give the heading to the pilot, who could then lay in
the course.

## Ships

Will range in size from a small, one-person dinghy up to a gargantuan Frigate
with a crew of anywhere up to 32.  I don't anticipate supporting larger-than-32
vessels for the first installment of the franchise.
