\newcommand{\Seg}{\mathrm{Seg}}
\newcommand{\NULL}{\mathrm{NULL}}
\newcommand{\INULL}{\calI_\mathrm{NULL}}
\newcommand{\INULL}{\calI_\mathrm{NULL}}			  
\newcommand{\cl}{\mathit{cl}}

$\NULL$ ideal on $\N$.
$I_{NULL} = \{A \subseteq\real\colon \mathit{cl}(A) \in \calN \}$.

Define $\Seg$ as a family of all finite sums of closed intervals
which have measure greater than $1$.

We have $\INULL = S^0(\Seg)$. Indeed, if $A \in \INULL$
and $S\in\Seg$ then $\mathit{int}(S) \setminus \cl(A)$ is an open 
set of measure $> 1$, therefore there exists $S_1\in \Seg$
such that $S_1 \subseteq S \setminus \cl(A)$.
  On the other hand, suppose that $A\subseteq \real$
is such that $\cl(A)$ has positive measure. By the
density theorem find $x_0 \in \cl(A)$ and 
$0 < \etha < \frac{1}{2}$ such that
$\mi((x_0-\etha, x_0+\etha) \cap \cl(A)) > \etha$.
Let $J$ be any closed interval disjoint from 
$\lbrace x_0-\etha, x_0+\etha\rbrace$ of length
$1 - \frac{3}{2}\etha$. 
Put $S = J \cup \lbrace x_0-\etha, x_0+\etha\rbrace$.
Then $S\in\Seg$ and there is no $S_1\in\Seg$, $S_1 \subseteq S$
disjoint from $A$.

$b\colon \N\to \rationals$
Let us define:
	$\calF = \{b^{-1}[S]\colon S \in \Seg\}$.
We check that 	
$S^0(\calF) = \NULL$.
Let $A\in \NULL$ and choose $S \in \Seg$.
Then there exists $S_1\subseteq S$, $S_1\in \Seg$
such that $\cl(b[A]) \cap S_1 = \emptyset$.
Then $A \cap b^{-1}[S_1] = \emptyset$, which
proves that $A\in S^0(\calF)$.

On the other hand, let $A\in S^0(\calF)$ and
choose $S\in\Seg$. Then there exists $S_1 \subseteq S$
$S_1\in\Seg$ such that $A\cap b^{-1}[S_1] = \emptyset$.
Hence $b[A] \cap S_1 = emptyset$ and moreover there
exists $S_2\in\Seg$ such that $S_2 \subseteq \int(S_1)$.
Thus $\cl(b[A])\cap \int(S_1) = \emptyset$
so $\cl(b[A])\cap S_2 = \emptyset$, which
proves that $\cl(b[A])\in\negligible$, so $A\in\NULL$.
	
