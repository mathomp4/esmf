---
src_dir: ../src
search: false
graph: false
coloured_edges: true
graph_maxdepth: 4
graph_maxnodes: 32
include: ../build_config/Darwin.gfortran.default/
         ../src/Infrastructure/Array/include/
         ../src/Infrastructure/ArrayBundle/include/
         ../src/Infrastructure/ArraySpec/include/
         ../src/Infrastructure/Base/include/
         ../src/Infrastructure/Config/include/
         ../src/Infrastructure/Container/include/
         ../src/Infrastructure/DELayout/include/
         ../src/Infrastructure/DistGrid/include/
         ../src/Infrastructure/Field/include/
         ../src/Infrastructure/Grid/include/
         ../src/Infrastructure/GridUtil/include/
         ../src/Infrastructure/HConfig/include/
         ../src/Infrastructure/IO/include/
         ../src/Infrastructure/LocStream/include/
         ../src/Infrastructure/LocalArray/include/
         ../src/Infrastructure/LogErr/include/
         ../src/Infrastructure/Mesh/include/
         ../src/Infrastructure/Mesh/src/Moab/io/mhdf/include/
         ../src/Infrastructure/Mesh/src/Moab/mesquite/include/
         ../src/Infrastructure/PointList/include/
         ../src/Infrastructure/Route/include/
         ../src/Infrastructure/TimeMgr/include/
         ../src/Infrastructure/Trace/include/
         ../src/Infrastructure/Util/include/
         ../src/Infrastructure/VM/include/
         ../src/Infrastructure/XGrid/include/
         ../src/Superstructure/Component/include/
         ../src/Superstructure/ESMFMod/include/
         ../src/Superstructure/Mapper/include/
         ../src/Superstructure/State/include/
         ../src/Superstructure/WebServices/include/
         ../src/epilogue/include/
         ../src/prologue/yaml-cpp/include/
         ../src/Infrastructure/IO/PIO/ParallelIO/src/gptl/
exclude_dir: ../Ford
             ../src/Infrastructure/IO/PIO/ParallelIO
exclude: ESMF_VMGetMPICommunicatorF08Ex.F90
         ESMF_InfoCDefGeneric.F90
         ESMF_InfoCDef.F90
macro: USE_MPI=1
       BUILD_WITH_PFLOGGER=1
       BUILD_WITH_EXTDATA2G=1
       USE_FLAP=1
       H5_HAVE_PARALLEL=1
       TWO_SIDED_COMM=1
       MAPL_MODE=1
fixed_length_limit: false
source: true
display: public
         private
         protected
extra_mods: iso_fortran_env:https://gcc.gnu.org/onlinedocs/gfortran/ISO_005fFORTRAN_005fENV.html
            iso_c_binding:https://gcc.gnu.org/onlinedocs/gfortran/ISO_005fC_005fBINDING.html#ISO_005fC_005fBINDING
project: MAPL
project_github: https://github.com/esmf-org/esmf
project_website: https://github.com/esmf-org/esmf
summary: ESMF is ESMF
author: Matt Thompson
author_description: Certified Nerd
github: https://github.com/mathomp4
email: matthew.thompson@nasa.gov
print_creation_date: true
sort: type-alpha
docmark: <
predocmark: >
md_extensions: markdown.extensions.toc
               markdown.extensions.smarty
extensions: f90
            F90
            pf
fpp_extensions: F90
                pf
                F
externalize: true
---

{!../README.md!}
