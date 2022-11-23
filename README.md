# iGEM-2022-Dry-Lab
Structural Modelling and Mathematical Modelling of Lead Absorbing Genetic Circuit and Oscillatory Biosensor
# Frequency-Based Oscillations in Genetic Circuit for Biosensor Construction

## Overview
This project validates the functionality of a genetic circuit used in constructing a biosensor by identifying frequency-based oscillations. We modeled the dynamics of a quorum-sensing oscillator using differential equations, focusing on the intracellular concentrations of LuxI (I), AiiA (A), internal AHL (Hi), and external AHL (He). The differential equations, derived from existing literature, simulate the reaction dynamics.

## Methodology

### System Modeling
We represent our system using a set of four differential equations. The equations consider the concentrations of various elements in the model. Key assumptions include:
- External AHL variation with position x is ignored, transforming partial differentials into ordinary differential equations.
- Constant concentration of LuxR throughout the simulation.
- G(α, τ) represents delayed protein generation, reflecting the historical concentration of internal AHL.

### Figure 1.1
(a) System of Delayed Differential Equations  
(b) Hill Function and Delay Definitions

![Figure 1.1](https://static.igem.wiki/teams/4428/wiki/model/eq1-2.png)

### Parameters
(Description of parameters and Table 1.1)
![Table 1.1](https://static.igem.wiki/teams/4428/wiki/model/parameters-new.png)

## Results
Simulation results display oscillations in the concentrations of different elements, confirming the concept of a lead-based oscillating biosensor.

### Figure 1.2
(a) Overall System Solution  
(b) Variations in LuxI Concentration

![Figure 1.2](https://static.igem.wiki/teams/4428/wiki/model/graphs-new.png)

## Analysis
- Oscillation ranges for LuxI, AiiA, and both internal and external AHL are identified.
- LuxI concentration changes indicate the period-modulating behavior of the sensor.
- Oscillations in internal AHL correlate with expected fluorescence oscillations.

## Parameter Sensitivity
We define a sensitivity score to analyze parameter impacts and provide troubleshooting insights for future wet lab experiments.

### Sensitivity Analysis
- τ (time delay constant) and d (cell density constant) are identified as critical parameters affecting oscillations.
- Detailed results and analysis in Table 1.2.
![Table 1.2](https://static.igem.wiki/teams/4428/wiki/model/sens-par-new.png)


## Conclusion
The study provides computational proof for the functionality of the biosensor genetic circuit and offers guidance for future experimental setups.


# Lead Recovery System: Structural Modeling and Molecular Simulations

## Overview

Our project focuses on developing advanced lead recovery systems, addressing limitations like display efficiency, specificity, and binding affinity. We utilize structural modeling and molecular simulations to evaluate various lead-binding proteins, identifying the most efficient ones for lead recovery. Our pipeline extends to other metal ions, offering a versatile approach to heavy metal recovery systems.

## Methodology

### Detailed Plan

Our pipeline encompasses three main steps:

1. **Protein Structure Generation**: 
   - Proteins PbrR, PbrR MBD, and PbrR691 were modeled using SWISS-MODEL and UniProt.
   - Simulations were run in water to update protein structures.

   ![Protein Structure](https://static.igem.wiki/teams/4428/wiki/model/pbrr-m-d.png)

2. **Molecular Dynamics Simulations**:
   - Simulated in Desmond from Schrodinger for 100 nanoseconds.
   - Included a pre-simulation minimization phase of 100 picoseconds.
   - Final frames were downloaded for subsequent analysis.

   ![Molecular Dynamics Simulation](https://static.igem.wiki/teams/4428/wiki/model/protein-s1.png)

3. **Lead-Protein Complex Formation**:
   - Due to limitations with AutoDock, lead ions were manually added to the protein structures.
   - Binding sites were determined from existing literature.

   ![Lead-Protein Complex](https://static.igem.wiki/teams/4428/wiki/model/protein-s1-l.png)

### Protein Structures

- **PbrR**: Modeled as both monomer and dimer; dimer structure based on homology with CdrR.
- **PbrR MBD (Metal Binding Domain)**: Truncated sequence modeled to improve expression and reduce cellular stress.
- **PbrR691**: Known for its selectivity; modeled based on X-ray diffraction data.

### Simulation and Analysis

- **Environment Simulation**: Lead-protein complexes simulated in a water environment for 100 nanoseconds.
- **Stability Analysis**: RMSD and RMSF values were used to assess stability and binding efficacy.

## Results and Analysis

### RMSD Curves

1. **PbrR Monomer**: 
   - Specific details and visualization of RMSD curves.

   ![RMSD Curve - PbrR Monomer](https://static.igem.wiki/teams/4428/wiki/model/rmsd-p.png)

2. **PbrR Dimer**:
   - Analysis of RMSD values for overall stability.

   ![RMSD Curve - PbrR Dimer](https://static.igem.wiki/teams/4428/wiki/model/rmsd-p-ii.png)

3. **PbrR MBD**:
   - Examination of the stability of the lead binding pocket.

   ![RMSD Curve - PbrR MBD](https://static.igem.wiki/teams/4428/wiki/model/rmsd-p-iii.png)

4. **PbrR691**:
   - Stability analysis of lead ions within the binding pocket.

   ![RMSD Curve - PbrR691](https://static.igem.wiki/teams/4428/wiki/model/rmsd-p-iv-new.png)

### Discussion

- **Dimer Structures**: Justification for using dimer structures based on binding pocket feasibility.
- **Protein Surface Expression**: Analysis of protein dimerization and its implications for lead binding.

## Miscellaneous

1. **Mistakes in Existing Parts**:
   - **Part:BBa_K1701001**: Discrepancy in PbrR protein structure.
   - **Part:BBa_K1958007**: Incorrect lead binding residues for PbrR.

## Conclusion

Our structural modeling and molecular simulation approach successfully identifies efficient proteins for lead recovery, paving the way for enhanced heavy metal recovery systems.

## Additional Resources

- [Link to Predicted Structure based on UniProt](https://static.igem.wiki/teams/4428/wiki/model/in-water.png)
- [Project Presentation Video](https://video.igem.org/w/17KyQ265cULvUv8w6uEB2E)

[Add any other relevant links or references]
