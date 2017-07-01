# Answers for exercises of *Artificial Intelligence: A Modern Approach*

---

## 1. Introduction

### Exercise 1.1

> Define in your own words: (a) intelligence, (b) artificial intelligence, \(c\) agent, (d) rationality, (e) logical reasoning.  

1. Intelligence is the ability to achieve goals by perceiving the environment.

1. Artificial intelligence is algorithms embodied intelligence, such as thinking intelligently or behave intelligently.

1. Agent is the binding of hardware and software to build intelligence.

1. Rationality is being logical.

1. Logical reasoning is drawing conclusions under given conditions based on syllogism or other logical theory.

### Exercise 1.2

> Read Turing’s original paper on AI (Turing, 1950). In the paper, he discusses several objections to his proposed enterprise and his test for intelligence. Which objections still carry weight? Are his refutations valid? Can you think of new objections arising from developments since he wrote the paper? In the paper, he predicts that, by the year 2000, a computer will have a 30% chance of passing a five-minute Turing Test with an unskilled interrogator.  What chance do you think a computer would have today? In another 50 years?  

### Exercise 1.3

> Are reflex actions (such as flinching from a hot stove) rational? Are they intelligent?  

Reflex actions are rational as they are needed in these conditions. They are not intelligent separately, but can be considered to be intelligent when many reflex actions work together to deal with different events.

### Exercise 1.4

> Suppose we extend Evans’s ANALOGY program so that it can score 200 on a standard IQ test. Would we then have a program more intelligent than a human? Explain.  

Definitely no. IQ test is just a few tests that can easily be enumerated, while the true world is far more complex. Even according to the performance measurement of IQ test, ANALOGY program does better than human be, it is hard to say that it can do better in other environment or with other performance measurement.

### Exercise 1.5

> The neural structure of the sea slug *Aplysia* has been widely studied (first by Nobel Laureate Eric Kandel) because it has only about 20,000 neurons, most of them large and easily manipulated. Assuming that the cycle time for an *Aplysia* neuron is roughly the same as for a human neuron, how does the computational power, in terms of memory updates per second, compare with the high-end computer described in Figure 1.3?

### Exercise 1.6

> How could introspection—reporting on one’s inner thoughts—be inaccurate? Could I be wrong about what I’m thinking? Discuss.  

### Exercise 1.7

> To what extent are the following computer systems instances of artificial intelligence:
> * Supermarket bar code scanners.
> * Web search engines.
> * Voice-activated telephone menus.
> * Internet routing algorithms that respond dynamically to the state of the network.  

1. No intelligence

1.

1. language cognition

1.

### Exercise 1.8

> Many of the computational models of cognitive activities that have been proposed involve quite complex mathematical operations, such as convolving an image with a Gaussian or finding a minimum of the entropy function. Most humans (and certainly all animals) never learn this kind of mathematics at all, almost no one learns it before college, and almost no one can compute the convolution of a function with a Gaussian in their head. What sense does it make to say that the “vision system” is doing this kind of mathematics, whereas the actual person has no idea how to do it?  

### Exercise 1.9

> Why would evolution tend to result in systems that act rationally? What goals are such systems designed to achieve?  

### Exercise 1.10

> Is AI a science, or is it engineering? Or neither or both? Explain.  

### Exercise 1.11

> Surely computers cannot be intelligent—they can do only what their programmers tell them.” Is the latter statement true, and does it imply the former?  

### Exercise 1.12

> Surely animals cannot be intelligent—they can do only what their genes tell them.” Is the latter statement true, and does it imply the former?  

### Exercise 1.13

> Surely animals, humans, and computers cannot be intelligent—they can do only what their constituent atoms are told to do by the laws of physics.” Is the latter statement true, and does it imply the former?  

### Exercise 1.14

> Examine the AI literature to discover whether the following tasks can currently be solved by computers:  
> **a**. Playing a decent game of table tennis (Ping-Pong).  
> **b**. Driving in the center of Cairo, Egypt.  
> **c**. Driving in Victorville, California.  
> **d**. Buying a week’s worth of groceries at the market.  
> **e**. Buying a week’s worth of groceries on the Web.  
> **f**. Playing a decent game of bridge at a competitive level.  
> **g**. Discovering and proving new mathematical theorems.  
> **h**. Writing an intentionally funny story.  
> **i**. Giving competent legal advice in a specialized area of law.  
> **j**. Translating spoken English into spoken Swedish in real time.  
> **k**. Performing a complex surgical operation.  
> For the currently infeasible tasks, try to find out what the difficulties are and predict when, if ever, they will be overcome.  

### Exercise 1.15

> Various subfields of AI have held contests by defining a standard task and inviting researchers to do their best. Examples include the DARPA Grand Challenge for robotic cars, The International Planning Competition, the Robocup robotic soccer league, the TREC information retrieval event, and contests in machine translation, speech recognition. Investigate five of these contests, and describe the progress made over the years. To what degree have the contests advanced toe state of the art in AI? Do what degree do they hurt the field by drawing energy away from new ideas?

---

### Exercise 2.1

> Suppose that the performance measure is concerned with just the first T time steps of the environment and ignores everything thereafter. Show that a rational agent’s action may depend not just on the state of the environment but also on the time step it has reached.  

### Exercise 2.2

> Let us examine the rationality of various vacuum-cleaner agent functions.  
> **a**. Show that the simple vacuum-cleaner agent function described in   Figure 2.3 is indeed rational under the assumptions listed on page 38.  
> **b**. Describe a rational agent function for the case in which each   movement costs one point.  Does the corresponding agent program require internal state?  
> **c**. Discuss possible agent designs for the cases in which clean squares can become dirty and the geography of the environment is unknown. Does it make sense for the agent to learn from its experience in these cases? If so, what should it learn? If not, why not?   

### Exercise 2.3

> For each of the following assertions, say whether it is true or false and support your answer with examples or counterexamples where appropriate.  
> **a**. An agent that senses only partial information about the state cannot be perfectly rational.  
> **b**. There exist task environments in which no pure reflex agent can behave rationally.  
> **c**. There exists a task environment in which every agent is rational.  
> **d**. The input to an agent program is the same as the input to the agent function.  
> **e**. Every agent function is implementable by some program/machine combination.  
> **f**. Suppose an agent selects its action uniformly at random from the set of possible actions.  There exists a deterministic task environment in which this agent is rational.  
> **g**. It is possible for a given agent to be perfectly rational in two distinct task environments.  
> **h**. Every agent is rational in an unobservable environment.  
> **i**. A perfectly rational poker-playing agent never loses.   

### Exercise 2.4

> For each of the following activities, give a PEAS description of the task environment and characterize it in terms of the properties listed in Section 2.3.2.
> * Playing soccer.  
> * Exploring the subsurface oceans of Titan.  
> * Shopping for used AI books on the Internet.  
> * Playing a tennis match.  
> * Practicing tennis against a wall.  
> * Performing a high jump.  
> * Knitting a sweater.  
> * Bidding on an item at an auction.  

### Exercise 2.5

> Define in your own words the following terms: agent, agent function, agent program, rationality, autonomy, reflex agent, model-based agent, goal-based agent, utility-based agent, learning agent.  

### Exercise 2.6

> This exercise explores the differences between agent functions and agent programs.  
> **a**. Can there be more than one agent program that implements a given agent function?  Give an example, or show why one is not possible.  
> **b**. Are there agent functions that cannot be implemented by any agent program?  
> **c**. Given a fixed machine architecture, does each agent program implement exactly one agent function?  
> **d**. Given an architecture with n bits of storage, how many different possible agent programs are there?  
> **e**. Suppose we keep the agent program fixed but speed up the machine by a factor of two.  Does that change the agent function?    

### Exercise 2.7

> Write pseudocode agent programs for the goal-based and utility-based agents.  The following exercises all concern the implementation of environments and agents for the vacuum-cleaner world.

### Exercise 2.8

> Implement a performance-measuring environment simulator for the vacuum-cleaner world depicted in Figure 2.2 and specified on page 38. Your implementation should be modular so that the sensors, actuators, and environment characteristics (size, shape, dirt placement, etc.) can be changed easily. (Note: for some choices of programming language and operating system there are already implementations in the online code repository.)

### Exercise 2.9

> Implement a simple reflex agent for the vacuum environment in Exercise 2.8. Run the environment with this agent for all possible initial dirt configurations and agent locations.  Record the performance score for each configuration and the overall average score.  

### Exercise 2.10

> Consider a modified version of the vacuum environment in Exercise 2.8, in which the agent is penalized one point for each movement.  
> **a**. Can a simple reflex agent be perfectly rational for this environment? Explain.  
> **b**. What about a reflex agent with state? Design such an agent.  
> **c**. How do your answers to a and b change if the agent’s percepts give it the clean/dirty status of every square in the environment?  

### Exercise 2.11

> Consider a modified version of the vacuum environment in Exercise 2.8, in which the geography of the environment—its extent, boundaries, and obstacles—is unknown, as is the initial dirt configuration. (The agent can go Up and Down as well as Left and Right.)  
> **a**. Can a simple reflex agent be perfectly rational for this environment? Explain.  
> **b**. Can a simple reflex agent with a randomized agent function outperform a simple reflex agent? Design such an agent and measure its performance on several environments.  
> **c**. Can you design an environment in which your randomized agent will perform poorly?  Show your results.  
> **d**. Can a reflex agent with state outperform a simple reflex agent? Design such an agent and measure its performance on several environments. Can you design a rational agent of this type?  

### Exercise 2.12

> Repeat Exercise 2.11 for the case in which the location sensor is replaced with a “bump” sensor that detects the agent’s attempts to move into an obstacle or to cross the boundaries of the environment. Suppose the bump sensor stops working; how should the agent behave?  

### Exercise 2.13

> The vacuum environments in the preceding exercises have all been deterministic. Discuss possible agent programs for each of the following stochastic versions:  
> **a**. Murphy’s law: twenty-five percent of the time, the Suck action fails to clean the floor if it is dirty and deposits dirt onto the floor if the floor is clean. How is your agent program affected if the dirt sensor gives the wrong answer 10% of the time?  
> **b**. Small children: At each time step, each clean square has a 10% chance of becoming dirty. Can you come up with a rational agent design for this case?  
