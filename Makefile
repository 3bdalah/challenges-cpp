.PHONY: clean All

All:
	@echo "----------Building project:[ A_Magnets - Debug ]----------"
	@cd "A_Magnets" && "$(MAKE)" -f  "A_Magnets.mk"
clean:
	@echo "----------Cleaning project:[ A_Magnets - Debug ]----------"
	@cd "A_Magnets" && "$(MAKE)" -f  "A_Magnets.mk" clean
