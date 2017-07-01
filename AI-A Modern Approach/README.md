# Notes for *Artificial Intelligence: A Modern Approach*

## 1. Introduction

### Definition of AI

Four kinds definition of AI

|                  |                     |
|------------------|---------------------|
| Thinking Humanly | Thinking Rationally |
| Acting Humanly   | Acting Rationally   |

1. Acting Humanly

    Turing Test, with following six disciplines

    * natural language processing

    * knowledge representation

    * automated reasoning

    * machine learning

    * computer vision

    * robotics

1. Thinking Humanly

    Cognitive modeling / cognitive science

    Three ways to get inside the actual working of human minds:

    * through introspection

    * through psychological experiments

    * through brain imaging

1. Thinking rationally

    Laws of thought / logic

    Two main obstacles to solve any solvable problem described in logical notation:

    * hard to state knowledge in formal terms

    * solving in practice is much harder than solving in principle

1. Acting rationally

    **Rational agent** is expected to:

    * operate autonomously

    * perceive their environment

    * persist over a prolonged time period

    * adapt to change

    * create and pursue goals

    Two advantages of rational agent:

    * More general than the "law of thought" approach / Thinking rationally

    * More amenable than approaches based on human thought or human behavior

    **This book concentrates on *rational agents*.**

### The Foundations of artificial Intelligence

1. Philosophy

    * Can formal rules be used to draw valid conclusions?

        Syllogisms, Calculating machine, Pascaline, Artificial animal

    * How does the mind arise from a physical brain?

        * rationalism

            Aristotle, Leibnitz

        * dualism

            Descartes

        * materialism

    * Where does knowledge come from?

        empiricism, logical positivism, confirmation theory, observation sentences, induction

    * How does knowledge lead to action?

        **Actions are justified by a logical connection between goals and knowledge of the action’s outcome. (By Aristotle)**

        Newell and Simon's GPS

        Antoine Arnauld's quantitative formula

        John Stuart Mill’s rational decision criteria

1. Mathematics

    AI become a formal science need mathematical formalization in:

    * logic - What are the formal rules to draw valid conclusions?

        propositional logic/Boolean logic

        first-order logic

    * computation - What can be computed?

        * algorithm

            Euclid's algorithm for computing greatest common divisors

            logical deduction

            incompleteness theorem,

        * tractability

            NP-completeness

    * probability - How do we reason with uncertain information?

        uncertain measurements

        incomplete theories

        Bayes’ rule

1. Economics

    * How should we make decisions so as to maximize payoff?

        preferred outcomes/utility

    * How should we do this when others may not go along?

        Decision theory

        Game theory        

    * How should we do this when the payoff may be far in the future?

        operations research

        Markov decision processes

        satisficing

1. Neuroscience

    * How do brains process information?

        Broca’s area, neurons, EEG, fMRI

        mysticism

1. Psychology

    * How do humans and animals think and act?

        * Behaviorism

        * Cognitive Psychology

            three key steps of a knowledge-based agent:

            1. the stimulus must be translated into an internal representation

            1. the representation is manipulated by cognitive processes to derive new internal representations

            1. these are in turn retranslated back into action

            | Paper | Author | Part of cognitive psychology |
            |-------|--------|------------------------------|
            | *The Magic Number Seven*   | George Miller               | memory           |
            | *Three Models of Language* | Noam Chomsky                | logical thinking |
            | *The Logic Theory Machine* | Allen Newell, Herbert Simon | language         |

1. Computer engineering

    * How can we build an efficient computer?

        automated machine

        programmable machine - a loom

        Analytical Engine

        electronic computer

        massive parallelism

1. Control theory and cybernetics

    * How can artifacts operate under their own control?

        water clock, steam engine governer, thermostat, submarine

        stable feedback system

        control theory

        homeostatic devices

        stochastic optimal control

1. Linguistics

     * How does language relate to thought?

     computational linguistics / natural language processing

     knowledge representation
·
### The History of artificial Intelligence

1. The gestation of artificial intelligence (1943–1955)

    *  Warren McCulloch and Walter Pitts's model of artificial neurons based on:
        * knowledge of the basic physiology and function of neurons in the brain

        * a formal analysis of propositional logic due to Russell and Whitehead

        * Turing’s theory of computation.

    * Hebbian learning

    * Marvin Minsky and Dean Edmonds's neural network

    * Alan Turing’s vision:

        * Turing Test

        * machine learning

        * genetic algorithms

        * reinforcement learning

        * the Child Programme idea

1. The birth of artificial intelligence (1956)

    * Dartmouth workshop (2 month, 10 man)

    * Logic Theorist (LT)

    * **Why it was necessary for AI to become a separate field.?**

        * The first answer is that AI from the start embraced the idea of duplicating human faculties such as creativity, self-improvement, and language use.

        * The second answer is methodology. AI is the only one of these fields that is clearly a branch of computer science (although operations research does share an emphasis on computer simulations), and AI is the only field to attempt to build machines that will function autonomously in complex, changing environments.

1. Early enthusiasm, great expectations (1952–1969)

    * General Problem Solver

    * Physical symbol system hypothesis

    * Geometry Theorem Prover

    * Advice Taker

    * Question-answering and planning systems

    * Shakey robotics project

    * SAINT program, ANALOGY program, STUDENT program

    * adalines, perceptrons, perceptron convergence theorem

1. A dose of reality (1966–1973)

    *  Machine translation

    * intractability

    * fundamental limitations

1. Knowledge-based systems: The key to power? (1969–1979)

    * DENDRAL program

    * Heuristic Programming Project (HPP)

    * expert system

    * Medical diagnosis / MYCIN

    * understanding natural language on knowledge

    * representation and reasoning languages

1. AI becomes an industry (1980–present)

    *  expert system, R1, Digital Equipment Corporation (DEC)

    * Fifth Generation (Japan)

    * Microelectronics and Computer Technology Corporation (MCC) (U.S.)

    * Intelligent Knowledge-Based Systems(IKBS, Britain)

1. The return of neural networks (1986–present)

    * back-propagation learning algorithm

    * connectionist model

    * modern neural networks, separated into two fields:

        * creating effective network architectures and algorithms and understanding their mathematical properties

        * the other concerned with careful modeling of the empirical properties of actual neurons and ensembles of neurons

1. AI adopts the scientific method (1987–present)

    **In terms of methodology, AI has finally come firmly under the scientific method.**

    * Speech recognition - hidden Markov models (HMMs)

    * Machine translation

    * Neural network -> data mining

    * Bayesian network formalism

    * normative expert systems

1. The emergence of intelligent agents (1995–present)

    * search engines

    * recommender systems

    * Web site aggregators

     * driving a car

     * playing chess

     * recognizing speech

     * human-level AI(HLAI)

     * Artificial General Intelligence(AGI)

 1. The availability of very large data sets (2001–present)

    **But some recent work in AI suggests that for many problems, it makes more sense to worry about the data and be less picky about what algorithm to apply.**

### The state of the art

* Robotic vehicles

* Speech recognition

* Autonomous planning and scheduling

    Remote Agent / MAPGEN / MEXAR2

* Game playing

    DEEP BLUE

* Spam fighting

* Logistics planning

    Dynamic Analysis and Replanning Tool, DART

* Robotics

    robotic vacuum cleaners, PackBot

* Machine Translation

### Summary

See notes above or the book.

### Bibliographical notes

The major AI conferences:

* the biennial International Joint Conference on AI (IJCAI)

* the annual European Conference on AI (ECAI)

* the National Conference on AI (AAAI)

The major journals for general AI:

* *Artificial Intelligence*

* *Computational Intelligence*

* *IEEE Transactions on Pattern Analysis and Machine Intelligence*

* *IEEE Intelligent Systems*

* *Journal of Artificial Intelligence Research* (electronic)

The main professional societies for AI:

* American Association for Artificial Intelligence (AAAI)

* ACM Special Interest Group in Artificial Intelligence (SIGART)

* Society for Artificial Intelligence and Simulation of Behaviour (AISB)

---

## 1. Intelligent Agents

### Agents and Environments

* agent

* environment

* sensors

* actuators

* agent function, agent program

### Good beahavior: the concept of rationality

* performance measurement

    1. This notion of desirability is captured by a performance measure that
    evaluates any given sequence of **environment states**.

    1. As a general rule, it is better to design performance measures according to what one actually wants in the environment, rather than according to how one thinks the agent should behave.

* rationality

    For each possible percept sequence, a **rational agent** should select an action that is expected to **maximize its performance measure**, given the evidence **provided by the percept sequence** and whatever **built-in knowledge** the agent has.

* Omniscience, learning, and autonomy

     Rationality maximizes expected performance, while perfection maximizes actual performance.

     **After sufficient experience of its environment, the behavior of a rational agent can become effectively independent of its prior knowledge.**

### The nature of environments

* Test environment = PEAS (Performance, Environment, Actuators, Sensors)

* Properties of task environments

    1. Fully observable vs. partially observable

    1. Single agent vs. multiagent

        The key distinction of whether B is a agent or not is whether B’s behavior is best described as maximizing a performance measure whose value depends on agent A’s behavior.

        * competitive multiagent environment

        * cooperative multiagent environment.

    1. Deterministic vs. stochastic

        An environment is uncertain if it is not fully observable or not deterministic.

    1. Episodic vs. sequential

    1. Static vs. dynamic

    1. Discrete vs. continuous

    1. Known vs. unknown

### The structure of agents

* *agent = architecture + program*

* agent program

    The difference between the **agent program**, which takes the current percept as input, and the **agent function**, which takes the entire percept history.

    Four basic kinds of agent programs:

    * **Simple reflex agents**

        Simple reflex agents select actions on the basis of the current percept, ignoring the rest of the percept history.

        ![simple-reflex-aget](images/simple-reflex-aget.png)

    * **Model-based reflex agents**

        ![model-based-agent](images/model-based-agent.png)

    * **Goal-based agents**

        ![goal-based-agent](images/goal-based-agent.png)

    * **Utility-based agents**

        ![utility-based-agent](images/utility-based-agent.png)

    * **Learning agents**

        ![learning-agent](images/learning-agent.png)

        A learning agent can be divided into four conceptual components:

        * problem generator
        * learning element
        * performance element
        * critic

* How the components of agent programs work

    The components of agent can represent the environment in three ways:

    * atomic

        * search and game-playing

        * Hidden Markov models

        * Markov decision processes

    * factored

        * constraint satisfaction

        * propositional logic

        * planning

        * Bayesian networks

        * machine learning

    * structured

        * relational databases

        * first-order logic

        * first-order probability models

        * knowledge-based learning

        * natural language understanding

---
