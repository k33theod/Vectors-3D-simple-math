##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=vectors2
ConfigurationName      :=Debug
WorkspacePath          :=C:/MinGW/ctraining/vectors_math
ProjectPath            :=C:/MinGW/ctraining/vectors_math/vectors2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=thodoris
Date                   :=14/08/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw1/bin/g++.exe
SharedObjectLinkerName :=C:/mingw1/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="vectors2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw1/bin/windres.exe
LinkOptions            :=  -static-libgcc -static-libstdc++
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw1/bin/ar.exe rcu
CXX      := C:/mingw1/bin/g++.exe
CC       := C:/mingw1/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw1/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector_2d.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector_3d.cpp$(ObjectSuffix) $(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IntermediateDirectory)/Plane_3d.cpp$(ObjectSuffix) $(IntermediateDirectory)/Line_3d.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Vector_2d.cpp$(ObjectSuffix): Vector_2d.cpp $(IntermediateDirectory)/Vector_2d.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/Vector_2d.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vector_2d.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vector_2d.cpp$(DependSuffix): Vector_2d.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vector_2d.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vector_2d.cpp$(DependSuffix) -MM Vector_2d.cpp

$(IntermediateDirectory)/Vector_2d.cpp$(PreprocessSuffix): Vector_2d.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vector_2d.cpp$(PreprocessSuffix) Vector_2d.cpp

$(IntermediateDirectory)/Vector_3d.cpp$(ObjectSuffix): Vector_3d.cpp $(IntermediateDirectory)/Vector_3d.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/Vector_3d.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vector_3d.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vector_3d.cpp$(DependSuffix): Vector_3d.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vector_3d.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vector_3d.cpp$(DependSuffix) -MM Vector_3d.cpp

$(IntermediateDirectory)/Vector_3d.cpp$(PreprocessSuffix): Vector_3d.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vector_3d.cpp$(PreprocessSuffix) Vector_3d.cpp

$(IntermediateDirectory)/Point.cpp$(ObjectSuffix): Point.cpp $(IntermediateDirectory)/Point.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/Point.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Point.cpp$(DependSuffix): Point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Point.cpp$(DependSuffix) -MM Point.cpp

$(IntermediateDirectory)/Point.cpp$(PreprocessSuffix): Point.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Point.cpp$(PreprocessSuffix) Point.cpp

$(IntermediateDirectory)/Plane_3d.cpp$(ObjectSuffix): Plane_3d.cpp $(IntermediateDirectory)/Plane_3d.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/Plane_3d.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Plane_3d.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Plane_3d.cpp$(DependSuffix): Plane_3d.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Plane_3d.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Plane_3d.cpp$(DependSuffix) -MM Plane_3d.cpp

$(IntermediateDirectory)/Plane_3d.cpp$(PreprocessSuffix): Plane_3d.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Plane_3d.cpp$(PreprocessSuffix) Plane_3d.cpp

$(IntermediateDirectory)/Line_3d.cpp$(ObjectSuffix): Line_3d.cpp $(IntermediateDirectory)/Line_3d.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MinGW/ctraining/vectors_math/vectors2/Line_3d.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Line_3d.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Line_3d.cpp$(DependSuffix): Line_3d.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Line_3d.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Line_3d.cpp$(DependSuffix) -MM Line_3d.cpp

$(IntermediateDirectory)/Line_3d.cpp$(PreprocessSuffix): Line_3d.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Line_3d.cpp$(PreprocessSuffix) Line_3d.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


