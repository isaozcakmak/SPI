#ifndef PANDA_ABSTRACTSYNTAXTREENUMNODE
#define PANDA_ABSTRACTSYNTAXTREENUMNODE

#include <string>
#include <vector>
#include <Token.h>
#include <AbstractSyntaxTree.h>

class AbstractSyntaxTreeNumNode : public AbstractSyntaxTree
{
public:
	AbstractSyntaxTreeNumNode(Token token);
	~AbstractSyntaxTreeNumNode() {}
	
	virtual NodeType getNodeType();
	double getTokenValue();

private:
	NodeType m_nodeType;

	Token m_token;

};


#endif // PANDA_ABSTRACTSYNTAXTREENUMNODE